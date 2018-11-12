SUMMARY = "Python functions for encoding and decoding COBS"
HOMEPAGE = "https://github.com/cmcqueen/cobs-python"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=99b98409d812a244309c8137a9e3aeea"
DEPENDS = "${PYTHON_PN}-cython-native ${PYTHON_PN}"

PYPI_PACKAGE = "cobs"
inherit pypi

SRC_URI[md5sum] = "2b36b6823a6692d60ea050f26185d635"
SRC_URI[sha256sum] = "ae3319b5704d9269d1ca60787d2e5b79322bb9f440215ea086b986ed8d2a8405"

BBCLASSEXTEND = "native nativesdk"
