SUMMARY = "Copies bash script in /usr/bin"

LICENSE = "MIT"

LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.MIT;md5=3da9cfbcb788c80a0384361b4de20420"

SRC_URI = "file://hello.sh"

S = "${WORKDIR}"

RDEPENDS:${PN}  = "bash"
RPROVIDES:${PN} = "rprovides libfoo"



do_install() {
    install -d ${D}${bindir}
    install -m 0755 ${S}/hello.sh ${D}${bindir}/
}

