/*
 * Copyright (c) 2002-2013 Balabit
 * Copyright (c) 1998-2012 Balázs Scheidler
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As an additional exemption you are allowed to compile & link against the
 * OpenSSL libraries as published by the OpenSSL project. See the file
 * COPYING for details.
 *
 */

#ifndef AFFILE_COMMON_H_INCLUDED
#define AFFILE_COMMON_H_INCLUDED

#include "file-perms.h"

typedef struct _FileOpenOptions
{
  gboolean create_dirs:1,
           needs_privileges:1,
           is_pipe:1;
  gint open_flags;
} FileOpenOptions;

gboolean affile_open_file(gchar *name, FileOpenOptions *open_opts, FilePermOptions *perm_opts, gint *fd);

#endif
