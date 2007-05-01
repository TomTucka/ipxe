#ifndef _GPXE_DOWNLOADER_H
#define _GPXE_DOWNLOADER_H

/** @file
 *
 * Image downloader
 *
 */

struct job_interface;
struct image;

extern int create_downloader ( struct job_interface *job,
			       const char *uri_string, struct image *image,
			       int ( * register_image ) ( struct image * ) );

#endif /* _GPXE_DOWNLOADER_H */
