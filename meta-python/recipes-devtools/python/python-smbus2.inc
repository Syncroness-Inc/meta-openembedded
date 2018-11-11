SUMMARY = "Pure python implementation of the python-smbus package"
HOMEPAGE = "https://github.com/kplindegaard/smbus2"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILE_CHKSUM = "https://raw.githubusercontent.com/kplindegaard/smbus2/master/LICENSE;md5=2a3eca2de44816126b3c6f33811a9fba"
DEPENDS = "${PYTHON_PN}"

PYPI_PACKAGE = "smbus2"
inherit pypi

SRC_URI[md5sum] = "de1f6a4eb5aaef90ae30fb9d3cab5145"
SRC_URI[sha256sum] = "b8d943ffe74670be969b5be79f47df0f597e91e8e0df2bc0d57203b1c2cabf2b"

BBCLASSEXTEND = "native nativesdk"
