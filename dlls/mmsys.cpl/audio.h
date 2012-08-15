/*
 * Audio Settings control panel applet
 * "Audio" page
 * 
 * Copyright 2012 Magdalena Nowak
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 *
 */


#ifndef __WINE_MMSYSCPL_AUDIOH__
#define __WINE_MMSYSCPL_AUDIOH__

#include <windows.h>

INT_PTR CALLBACK AudioDlgProc(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam);

#endif
