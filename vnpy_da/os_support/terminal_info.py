import wmi
from typing import Any


def get_network_interface() -> Any:
    """获取网络接口"""
    c = wmi.WMI()
    interfaces = c.Win32_NetworkAdapterConfiguration(IPEnabled=1)
    if not interfaces:
        return None

    # 使用默认ip接入
    for interface in interfaces:
        if interface.DefaultIPGateway:
            return interface

    # 否则使用最新的
    return interface


def get_mac_address() -> str:
    """获取mac地址"""
    interface: Any = get_network_interface()
    if not interface:
        return ""

    mac_address: str = interface.MACAddress
    return mac_address
