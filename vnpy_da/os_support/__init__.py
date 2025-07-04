import sys

if sys.platform == "win32":
    from .terminal_info import get_mac_address
else:
    from .terminal_info_linux import get_mac_address
