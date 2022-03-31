#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/mountP.h>

typedef unsigned int (sz_callback *)(struct statvfs *blk_dev);

struct block_device {
		
	struct libmnt_context *ctx;
	struct libmnt_table *tb;

	const unsigned char *blk_name = NULL;
	const unsigned char fstab;
	
};

struct disk_space {

	unsigned int free;
	unsigned int total;


};

struct disk_usage {
	
	struct disk_space *mb_sz, *gb_sz;
	
	sz_callback *mb, *gb;

}












