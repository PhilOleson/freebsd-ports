--- src/lib_ccx/ffmpeg_intgr.h.orig	2018-02-15 23:36:31.337685000 -0700
+++ src/lib_ccx/ffmpeg_intgr.h	2018-02-15 23:36:46.360865000 -0700
@@ -1,6 +1,7 @@
 #ifndef _FFMPEG_INTIGRATION
 #define _FFMPEG_INTIGRATION
 
+#include "lib_ccx.h"
 #ifdef ENABLE_FFMPEG
 #include "libavutil/common.h"
 #include "libavutil/error.h"
