SUMMARY = "Python support for finite-state-machines"
HOMEPAGE = "https://github.com/fgmacedo/python-statemachine"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=69740254c596128a33809d38aeee36ef"
DEPENDS = "${PYTHON_PN}-cython-native ${PYTHON_PN}"

PYPI_PACKAGE = "python-statemachine"
inherit pypi

SRC_URI[md5sum] = "b9ff3b92ecc1802c864d506325e16d47"
SRC_URI[sha256sum] = "f6dfea765d952d713cf2e165686090c97b1942bb5a519ec61aab24e23a5db9ae"

BBCLASSEXTEND = "native nativesdk"
