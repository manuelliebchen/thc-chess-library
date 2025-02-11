/****************************************************************************
 * Portability.cpp Simple definitions to aid platform portability
 *  Author:  Bill Forster
 *  License: MIT license. Full text of license is in associated file LICENSE
 *  Copyright 2010-2020, Bill Forster <billforsternz at gmail dot com>
 ****************************************************************************/
#include <_ctype.h>

#define _CRT_SECURE_NO_DEPRECATE

// return 0 if case insensitive match
int strcmp_ignore( const char *s, const char *t )
{
    bool same=true;
    while( *s && *t && same )
    {
        char c = *s++;
        char d = *t++;
        same = (c==d) || (isascii(c) && isascii(d) && toupper(c)==toupper(d));
    }
    if( *s || *t )
        same = false;
    return same?0:1;
}

