SUMMARY = "A simple Python menu-based UI system for terminal applications"
HOMEPAGE = "https://github.com/aegirhall/console-menu"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=dd8ca86a8b23174372fed1424af98183"
DEPENDS = "${PYTHON_PN}-cython-native ${PYTHON_PN}"

PYPI_PACKAGE = "console-menu"
inherit pypi

SRC_URI[md5sum] = "d0e5a70bcdc74ab30ed9b1841e32d9b8"
SRC_URI[sha256sum] = "4cd817552d5655023c2a1cb04e565344b78c0f9c70d1723da541fa5663d54c96"

BBCLASSEXTEND = "native nativesdk"
