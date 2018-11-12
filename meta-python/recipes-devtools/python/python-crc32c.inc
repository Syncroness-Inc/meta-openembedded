SUMMARY = "Python CRC32C Algorithm"
HOMEPAGE = "https://github.com/ICRAR/crc32c"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/LGPL-2.1;md5=1a6d268fd218675ffea8be556788b780"
DEPENDS = "${PYTHON_PN}-cython-native ${PYTHON_PN}"

PYPI_PACKAGE = "crc32c"
inherit pypi

SRC_URI[md5sum] = "cccfb77c0482afb53d0e59290780f411"
SRC_URI[sha256sum] = "62a1ade9763462a7c3d669e016d38fc8b460b162be29eb43f1dc4db1e8c643b5"

BBCLASSEXTEND = "native nativesdk"

do_configure_append() {
  export CRC32C_SW_MODE=1
}
