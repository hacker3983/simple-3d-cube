#include <stdio.h>

void print_indent(int n) {
	for(int i=0;i<n;i++) {
		printf(" ");
	}
}

void print_dec_indent(int* n) {
	print_indent(*n);
	(*n)--;
}

void draw_3d_cube(int length, int width, int outer_indent) {
	int i = 0;
	print_dec_indent(&outer_indent);
	for(int i=0;i<width+3;i++) {
		printf("_");
	}
	printf("\n");
	print_dec_indent(&outer_indent);
	printf("/");
	print_indent(width+1);
	printf("/|\n");
	
	printf("/");
	for(int i=0;i<width+1;i++) { printf("_"); }
	printf("/ |\n");
	for(i=0;i<length;i++) {
		printf("|");
		if(i == length-1) {
			for(int j=0;j<width;j++) { printf("_"); }
		} else {
			print_indent(width);
		}
		printf("|");
		if(i == length-2) {
			printf(" /\n");
		} else if(i == length-1) {
			printf("/\n");
		} else {
			for(int j=0;j<2;j++) {
				printf(" ");
			}
			printf("|\n");
		}
	}
}

int main() {
	int length, width, outer_indent = 2;
	printf("Enter the length of the cube: ");
	scanf("%d", &length);
	printf("Enter the width of the cube: ");
	scanf("%d", &width);
	draw_3d_cube(length, width, outer_indent);
	return 0;
}
