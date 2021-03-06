
/**
* @file metis.h
* @brief Metis protocol implementation
* @author John Melton, G0ORX/N6LYT
* @version 0.1
* @date 2009-10-13
*/

/* Copyright (C)
* 2009 - John Melton, G0ORX/N6LYT
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*
*/

typedef struct _METIS_CARD {
    char ip_address[16];
    char mac_address[18];
} METIS_CARD;

void metis_discover(char* interface,char* metisip);
int metis_found();
char* metis_ip_address(int entry);
char* metis_mac_address(int entry);
void metis_start_receive_thread();

int metis_write(unsigned char ep,char* buffer,int length);
