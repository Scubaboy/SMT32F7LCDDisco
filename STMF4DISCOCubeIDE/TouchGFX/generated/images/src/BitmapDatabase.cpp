// -alpha_dither yes -dither 2 -non_opaque_image_format ARGB8888 -opaque_image_format ARGB8888 0x7f6f488e
// Generated by imageconverter. Please, do not edit!

#include <touchgfx/Bitmap.hpp>
#include <BitmapDatabase.hpp>

#ifndef NO_USING_NAMESPACE_TOUCHGFX
using namespace touchgfx;
#endif

extern const unsigned char _kisspng[];

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { _kisspng, 0, 900, 538, 0, 0, 900, 538, touchgfx::Bitmap::ARGB8888 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}
uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}

