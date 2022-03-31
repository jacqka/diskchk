#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/mountP.h>

struct block_device {
		
	struct libmnt_context *ctx;
	struct libmnt_table *tb;

	const unsigned char *blk_name = NULL;
	const unsigned char fstab;
	
};

struct disk_space {

	unsigned int free;
	unsigned int total;

(unsigned int *)

};

struct disk_usage {
	
	unsigned long blocks;
	unsigned long blocks_free;

	struct disk_space mb;
	struct disk_space gb;

	size_t *dev;

}

int block_dev_get_info(const unsigned char *fstab){

	struct statvfs blk_dev;

		unsigned long *total_blks = (void *)malloc(sizeof(blk_dev.f_blocks));
		


int main(int argc, char *argv[]){

	
	struct block_device mnt;
		
		
		mnt.ctx = mnt_new_context();
		mnt.tb = mnt_new_table();

	
	size_t *tb = (struct libmnt_table *)malloc(sizeof(mnt.tb));
	
	bool new;
	unsigned char ch, **disk;

	while((ch = getopt(argc, argv, "d:")) != EOF){
		switch(ch){
			case 'd':
				disk = optarg;
				break;

			case 'n':	
				new = 1;		
		}
		
	memset(&disk, 0, sizeof(disk));
		
		if(!new){
			
			mnt.blk_name = disk; 
						
				}
			
				free(disk);
				
	mnt_context_new_table(mnt.cxt, tb);

		mnt.fstab = mnt_get_fstab_path();	
				
			block_dev_get_info(mnt.fstab);
	
	
