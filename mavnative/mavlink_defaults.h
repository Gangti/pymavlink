#ifndef _MAVLINK_DEFAULTS_H
#define _MAVLINK_DEFAULTS_H

// This is normally dynamically generated as mavlink.h, but we just use the same settings for all native stacks

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

#endif