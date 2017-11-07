# $FreeBSD$

PORTNAME=	comskip
DISTVERSIONPREFIX=	v
DISTVERSION=	0.82.003
CATEGORIES=	multimedia

MAINTAINER=	oz@nixil.net
COMMENT=	Commercial Skipping utility.

USE_GITHUB=	yes
GH_ACCOUNT=	erikkaashoek 
GH_PROJECT=	Comskip

LIB_DEPENDS=    libargtable2.so:devel/argtable \
		libavcodec.so:multimedia/ffmpeg

USES=           autoreconf
USE_SDL=	sdl

GNU_CONFIGURE=  yes

pre-configure:
	@(cd ${WRKSRC} && ./autogen.sh)

.include <bsd.port.mk>
