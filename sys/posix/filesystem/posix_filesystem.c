/**
 * Copyright (C) 2025 HAW Hamburg
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup posix
 *
 * @{
 * @file
 * @brief  posix filesystem operations
 *
 * This module implements file related posix operations which are
 * not provided by common
 * @author Michel Rottleuthner <michel.rottleuthneræhaw-hamburg.de>
 * @}
 */

#include <unistd.h>

#if MODULE_VFS
#include "vfs.h"

int fsync(int fd)
{
    int res = vfs_fsync(fd);
    if (res < 0) {
        return -1;
    }
    return 0;
}
#endif /* MODULE_VFS */
