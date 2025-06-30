from uuid import getnode


def get_mac_address() -> str:
    """获取Mac地址"""
    mac = ""

    try:
        node: int = getnode()
        mac: str = "".join(("%012X" % node)[i: i + 2] for i in range(0, 12, 2))
    except Exception:
        pass

    if ":" in mac:
        mac = mac.replace(":", "")
    elif not mac:
        mac = "NA"

    return mac
