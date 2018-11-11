SUMMARY = "Pure python implementation of the python-smbus package"
HOMEPAGE = "https://github.com/kplindegaard/smbus2"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302" 
DEPENDS = "${PYTHON_PN}-cython-native ${PYTHON_PN}"

PYPI_PACKAGE = "smbus2"
inherit pypi

SRC_URI[md5sum] = "de1f6a4eb5aaef90ae30fb9d3cab5145"
SRC_URI[sha256sum] = "b8d943ffe74670be969b5be79f47df0f597e91e8e0df2bc0d57203b1c2cabf2b"

BBCLASSEXTEND = "native nativesdk"
