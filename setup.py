from setuptools import Extension, setup


def get_ext_modules() -> list:
    """
    获取三方模块

    Windows需要编译封装接口
    Linux和Mac由于缺乏二进制库支持无法使用
    """
    extra_compile_flags = ["-O2", "NOMINMAX"]
    extra_link_args = []
    runtime_library_dirs = []

    vndafuture = Extension(
        "vnpy_da.api.vndafuture",
        [
            "vnpy_da/api/vnda/vndafuture/vndafuture.cpp",
        ],
        include_dirs=["vnpy_da/api/include",
                      "vnpy_da/api/vnda"],
        define_macros=[('NOMINMAX', None)],
        undef_macros=[],
        library_dirs=["vnpy_da/api/libs", "vnpy_da/api"],
        libraries=["DAApi_x64", "vndafuture", "vndamarket", "vndastock"],
        extra_compile_args=extra_compile_flags,
        extra_link_args=extra_link_args,
        runtime_library_dirs=runtime_library_dirs,
        depends=[],
        language="cpp",
    )

    vndamarket = Extension(
        "vnpy_da.api.vndamarket",
        [
            "vnpy_da/api/vnda/vndamarket/vndamarket.cpp",
        ],
        include_dirs=["vnpy_da/api/include",
                      "vnpy_da/api/vnda"],
        define_macros=[('NOMINMAX', None)],
        undef_macros=[],
        library_dirs=["vnpy_da/api/libs", "vnpy_da/api"],
        libraries=["DAApi_x64", "vndafuture", "vndamarket", "vndastock"],
        extra_compile_args=extra_compile_flags,
        extra_link_args=extra_link_args,
        runtime_library_dirs=runtime_library_dirs,
        depends=[],
        language="cpp",
    )

    vndastock = Extension(
        "vnpy_da.api.vndastock",
        [
            "vnpy_da/api/vnda/vndastock/vndastock.cpp",
        ],
        include_dirs=["vnpy_da/api/include",
                      "vnpy_da/api/vnda"],
        define_macros=[('NOMINMAX', None)],
        undef_macros=[],
        library_dirs=["vnpy_da/api/libs", "vnpy_da/api"],
        libraries=["DAApi_x64", "vndafuture", "vndamarket", "vndastock"],
        extra_compile_args=extra_compile_flags,
        extra_link_args=extra_link_args,
        runtime_library_dirs=runtime_library_dirs,
        depends=[],
        language="cpp",
    )

    return [vndafuture, vndamarket, vndastock]


setup(
    ext_modules=get_ext_modules(),
)
