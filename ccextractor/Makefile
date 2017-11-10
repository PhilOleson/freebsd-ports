# $FreeBSD$

PORTNAME=       ccextractor
DISTVERSION=    0.85
DISTVERSIONPREFIX=      v
CATEGORIES=     multimedia
WRKSRC_SUBDIR=	src

MAINTAINER=     oz@nixil.net
COMMENT=        Closed caption extractor for MPEG and H264 files.

LICENSE=	GPLv2

LIB_DEPENDS=    libpng.so:graphics/png 
                libavcodec.so:multimedia/ffmpeg

USES=           cmake pkgconfig
USE_GITHUB=     yes

GH_ACCOUNT=	CCExtractor
GH_PROJECT=     ccextractor

CMAKE_ARGS=	-DWITH_FFMPEG=ON

PLIST_FILES=	bin/ccextractor

.include <bsd.port.mk>
