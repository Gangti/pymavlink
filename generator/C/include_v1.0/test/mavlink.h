/** @file
 *	@brief MAVLink comm protocol built from test.xml
 *	@see http://pixhawk.ethz.ch/software/mavlink
 */
#ifndef MAVLINK_H
#define MAVLINK_H

#ifndef MAVLINK_STX
// FIXED BY GANGTI/20190110/MAVLINK CUSTOMIZATION
#define MAVLINK_STX 239
// CLOSE BY GANGTI/20190110/MAVLINK CUSTOMIZATION
#endif

#ifndef MAVLINK_ENDIAN
#define MAVLINK_ENDIAN MAVLINK_LITTLE_ENDIAN
#endif

#ifndef MAVLINK_ALIGNED_FIELDS
#define MAVLINK_ALIGNED_FIELDS 1
#endif

#ifndef MAVLINK_CRC_EXTRA
#define MAVLINK_CRC_EXTRA 1
#endif

#include "version.h"
#include "test.h"

#endif // MAVLINK_H
