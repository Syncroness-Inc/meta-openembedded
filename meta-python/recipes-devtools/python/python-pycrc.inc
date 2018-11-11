SUMMARY = "Python libraries for CRC calculations"
HOMEPAGE = "http://www.pycrc.org"
SECTION = "devel/python"
LICENSE = "GPLv3"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d32239bcb673463ab874e80d47fae504"
DEPENDS = "${PYTHON_PN}-cython-native ${PYTHON_PN}"

PYPI_PACKAGE = "PyCRC"
inherit pypi

SRC_URI[md5sum] = "47d0e22393b9560b9db2de09f6d639e8"
SRC_URI[sha256sum] = "d3b0e788b501f48ae2ff6eeb34652343c9095e4356a65df217ed29b51e4045b6"

BBCLASSEXTEND = "native nativesdk"
