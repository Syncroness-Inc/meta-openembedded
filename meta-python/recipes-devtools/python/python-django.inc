SUMMARY = "A high-level Python Web framework"
HOMEPAGE = "http://www.djangoproject.com/"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=f09eb47206614a4954c51db8a94840fa"

SRC_URI[sha256sum] = "d6393918da830530a9516bbbcbf7f1214c3d733738779f06b0f649f49cc698c3"

PYPI_PACKAGE = "Django"
inherit pypi

FILES_${PN} += "${datadir}/django"

BBCLASSEXTEND = "nativesdk"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-importlib \
    ${PYTHON_PN}-numbers \
    ${PYTHON_PN}-pip \
    ${PYTHON_PN}-pkgutil \
    ${PYTHON_PN}-subprocess \
    ${PYTHON_PN}-threading \
    ${PYTHON_PN}-pytz \
    "
