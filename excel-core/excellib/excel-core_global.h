#ifndef EXCELCORE_GLOBAL_H
#define EXCELCORE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(EXCELCORE_LIBRARY)
#  define EXCELCORESHARED_EXPORT Q_DECL_EXPORT
#else
#  define EXCELCORESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // EXCELCORE_GLOBAL_H
