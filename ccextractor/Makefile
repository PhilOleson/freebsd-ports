PORTNAME=	ccextractor
DISTVERSIONPREFIX=	v
DISTVERSION=	0.94
CATEGORIES=	multimedia

MAINTAINER=	oz@nixil.net
COMMENT=	Closed caption extractor for MPEG and H264 files

LICENSE=	GPLv2

OPTIONS_DEFINE=		FFMPEG EXAMPLE
OPTIONS_DEFAULT=	FFMPEG EXAMPLE

BUILD_DEPENDS=  ${RUST_DEFAULT}>=1.39.0:lang/${RUST_DEFAULT}
LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2 \
		libgmp.so:math/gmp \
		libgnutls.so:security/gnutls \
		libogg.so:audio/libogg \
		libopencv_core.so:graphics/opencv \
		libpng.so:graphics/png \
		libtheoraenc.so:multimedia/libtheora \
		libv4l2.so:multimedia/libv4l \
		libva-x11.so:multimedia/libva \
		libvdpau.so:multimedia/libvdpau \
		libvorbisenc.so:audio/libvorbis \
		libvpx.so:multimedia/libvpx \
		libx264.so:multimedia/libx264 \
		libx265.so:multimedia/x265 \
		libxvidcore.so:multimedia/xvid \
		libleptonica.so:graphics/leptonica \
		libtesseract.so:graphics/tesseract

USES=		cmake:noninja iconv localbase:ldflags pkgconfig xorg cargo
USE_GITHUB=	yes
GH_ACCOUNT=	CCExtractor
GH_PROJECT=	ccextractor
USE_XORG=	x11
USE_LDCONFIG=	yes
CARGO_CONFIGURE=no
CARGO_BUILD=	no
CARGO_INSTALL=	no
CARGO_TEST=	no

CMAKE_SOURCE_PATH=	${WRKSRC}/src
CMAKE_ON=	WITH_OCR WITH_HARDSUBX
CMAKE_OFF=	WITH_SHARING

FFMPEG_CMAKE_BOOL=	WITH_FFMPEG
FFMPEG_LIB_DEPENDS=	libavcodec.so:multimedia/ffmpeg

.include <bsd.port.pre.mk>
EXAMPLE_FILE=	ccextractor.cnf.sample

do-install:
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

do-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/docs; ${INSTALL_DATA} ${EXAMPLE_FILE} ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.post.mk>

