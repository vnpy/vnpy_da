import platform

from setuptools import Extension, setup


def get_ext_modules() -> list:
    """
    获取三方模块
    Linux需要编译封装接口
    Windows直接使用预编译的pyd即可
    Mac由于缺乏二进制库支持无法使用
    """
    if platform.system() != "Linux":
        return []

    compiler_flags = [
        "-std=c++17",
        "-O3",
        "-Wno-delete-incomplete", "-Wno-sign-compare",
    ]
    extra_link_args = ["-lstdc++"]
    runtime_library_dirs = ["$ORIGIN"]

    vndamd = Extension(
        "vnpy_da.api.vndamd",
        [
            "vnpy_da/api/vnda/vndamd/vndamd.cpp",
        ],
        include_dirs=["vnpy_da/api/include",
                      "vnpy_da/api/vnda"],
        define_macros=[],
        undef_macros=[],
        library_dirs=["vnpy_da/api/libs", "vnpy_da/api"],
        libraries=["thostmduserapi_se", "thosttraderapi_se"],
        extra_compile_args=compiler_flags,
        extra_link_args=extra_link_args,
        runtime_library_dirs=runtime_library_dirs,
        depends=[],
        language="cpp",
    )

    vndatd = Extension(
        "vnpy_da.api.vndatd",
        [
            "vnpy_da/api/vnda/vndatd/vndatd.cpp",
        ],
        include_dirs=["vnpy_da/api/include",
                      "vnpy_da/api/vnda"],
        define_macros=[],
        undef_macros=[],
        library_dirs=["vnpy_da/api/libs", "vnpy_da/api"],
        libraries=["thostmduserapi_se", "thosttraderapi_se"],
        extra_compile_args=compiler_flags,
        extra_link_args=extra_link_args,
        runtime_library_dirs=runtime_library_dirs,
        depends=[],
        language="cpp",
    )

    return [vndatd, vndamd]


setup(
    ext_modules=get_ext_modules(),
)
