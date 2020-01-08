# $FreeBSD$

PORTNAME=	comchap
DISTVERSION=	0.0.2
CATEGORIES=	multimedia

MAINTAINER=	oz@nixil.net
COMMENT=	Commercial detection script.

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	comskip:multimedia/comskip \
		bash:shells/bash

USE_GITHUB=	yes

GH_ACCOUNT=	BrettSheleski
GH_PROJECT=	comchap
GH_TAGNAME=	bc03ed0

NO_BUILD=	yes

PLIST_FILES=	bin/comchap \
		bin/comcut \
                share/doc/comchap/usage.txt \
		share/doc/comchap/README.md

do-install:
.for file in comchap comcut
	${INSTALL_SCRIPT} ${WRKSRC}/${file} ${STAGEDIR}${PREFIX}/bin/
.endfor
	@${MKDIR} ${STAGEDIR}/${DOCSDIR}
.for file in usage.txt README.md
	${INSTALL_MAN} ${WRKSRC}/${file} ${STAGEDIR}${DOCSDIR}/
.endfor

.include <bsd.port.mk>
