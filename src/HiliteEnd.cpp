/*
 * Copyright (C) 2012 Kolibre
 *
 * This file is part of kolibre-daisyonline.
 *
 * Kolibre-daisyonline is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * Kolibre-daisyonline is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with kolibre-daisyonline. If not, see <http://www.gnu.org/licenses/>.
 */

#include "HiliteEnd.h"

namespace kdo
{

HiliteEnd::HiliteEnd()
{
}

HiliteEnd::HiliteEnd(std::string ncxRef, std::string URI) :
        kdo::BookmarkBase(ncxRef, URI)
{
}

HiliteEnd::HiliteEnd(std::string ncxRef, std::string URI, std::string timeOffset) :
        kdo::BookmarkBase(ncxRef, URI, timeOffset)
{
}

HiliteEnd::HiliteEnd(std::string ncxRef, std::string URI, int charOffset) :
        kdo::BookmarkBase(ncxRef, URI, charOffset)
{
}

HiliteEnd::HiliteEnd(std::string ncxRef, std::string URI, std::string timeOffset, int charOffset) :
        kdo::BookmarkBase(ncxRef, URI, timeOffset, charOffset)
{
}

HiliteEnd::HiliteEnd(kdo::BookmarkBase base) :
        kdo::BookmarkBase(base)
{
}

HiliteEnd::~HiliteEnd()
{
}

} /* namespace kdo */
