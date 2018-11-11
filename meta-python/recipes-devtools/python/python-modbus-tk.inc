SUMMARY = "Python support for modbus"
HOMEPAGE = "https://github.com/ljean/modbus-tk/"
SECTION = "devel/python"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/LGPL-2.1;md5=1a6d268fd218675ffea8be556788b780"
DEPENDS = "${PYTHON_PN}-cython-native ${PYTHON_PN}"

PYPI_PACKAGE = "modbus_tk"
inherit pypi

SRC_URI[md5sum] = "bb02a2c7b1f718554c32ae771c6c4e7e"
SRC_URI[sha256sum] = "0327f05d62bcdf3192a2e11c974ea6d7cf377bd8a340b32fc023dab398ff85ce"

BBCLASSEXTEND = "native nativesdk"
