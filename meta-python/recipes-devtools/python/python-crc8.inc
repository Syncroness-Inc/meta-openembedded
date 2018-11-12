SUMMARY = "A module that implements the CRC8 hash algorithm"
HOMEPAGE = "https://github.com/niccokunzmann/crc8"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"
DEPENDS = "${PYTHON_PN}-cython-native ${PYTHON_PN}"

PYPI_PACKAGE = "crc8"
inherit pypi

SRC_URI[md5sum] = "838ef864c8d885238ace184b9271783b"
SRC_URI[sha256sum] = "19301b8c0253148e814bdd1a26eb0bf62d501c476c080f0dbdef9eb9869649b7"

BBCLASSEXTEND = "native nativesdk"
