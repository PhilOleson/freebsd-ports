# $FreeBSD$

PORTNAME=	comskip
DISTVERSIONPREFIX=	v
DISTVERSION=	0.82.010
CATEGORIES=	multimedia

MAINTAINER=	oz@nixil.net
COMMENT=	Commercial Skipping utility.

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=    libargtable2.so:devel/argtable \
		libfontconfig.so:x11-fonts/fontconfig \
		libgmp.so:math/gmp \
		libgnutls.so:security/gnutls \
		libogg.so:audio/libogg \
		libopencv_core.so:graphics/opencv-core \
		libtheoraenc.so:multimedia/libtheora \
		libvorbisenc.so:audio/libvorbis \
		libvpx.so:multimedia/libvpx \
		libx264.so:multimedia/libx264 \
		libx265.so:multimedia/x265 \
		libxvidcore.so:multimedia/xvid \
		libavcodec.so:multimedia/ffmpeg

USES=           autoreconf localbase:ldflags

USE_GITHUB=	yes
GH_ACCOUNT=	erikkaashoek 
GH_PROJECT=	Comskip
GH_TAGNAME=	deb7460
USE_SDL=	sdl
USE_LDCONFIG=	yes

GNU_CONFIGURE=  yes

PLIST_FILES=	bin/comskip \
		bin/comskip-gui

pre-configure:
	@(cd ${WRKSRC} && ./autogen.sh)

.include <bsd.port.mk>
