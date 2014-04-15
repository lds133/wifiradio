/*
 * Copyright (c) 2011-2014 Mindspeed Technologies, Inc.. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify.
 * it under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but.
 * WITHOUT ANY WARRANTY; without even the implied warranty of.
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU.
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License.
 * along with this program; if not, write to the Free Software.
 * Foundation, Inc., 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 * The full GNU General Public License is included in this distribution.
 * in the file called LICENSE.GPL.
 *
 * Contact Information:
 * Mindspeed Technologies
 */

#ifndef TINYRX_H_
#define TINYRX_H_

#define TINYRX_PATTERNMAX 256
#define TINYRX_MATCHSTRMAX 256
#define TINYRX_MATCHMAX 3

typedef struct tagTINYRXINFO
{
	unsigned short int PPos;
	unsigned char IsEnabled;
	unsigned char IsFound;
	unsigned short int MPos;
	unsigned short int MIndex;
	unsigned char IsStopped;
	unsigned short int PLen;
	unsigned short int CharsFound;
	char Pattern[TINYRX_PATTERNMAX+1];
	char Match[TINYRX_MATCHMAX][TINYRX_MATCHSTRMAX +1];

} TINYRXINFO, *PTINYRXINFO;


unsigned char TINYREGEXProcess(TINYRXINFO* pregex,char c);
void TINYREGEXClean(TINYRXINFO* pregex);
void TINYREGEXCreate(TINYRXINFO* pregex,char* pattern);


#endif

