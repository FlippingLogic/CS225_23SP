#ifndef STICKERSHEET_H
#define STICKERSHEET_H

#include "Image.h"
using namespace cs225;

struct Sticker{
    unsigned x;
    unsigned y;
    Image* image;
};

class StickerSheet{
    public:
        StickerSheet(const Image &picture, unsigned max);
        ~StickerSheet();
        StickerSheet(const StickerSheet &other);
        const StickerSheet & operator= (const StickerSheet &other);
        void changeMaxStickers(unsigned max);
        int addSticker(Image &sticker, unsigned x, unsigned y);
        bool translate (unsigned index, unsigned x, unsigned y);
        void removeSticker(unsigned index);
        Image* getSticker(unsigned index) const;
        Image render() const;
        void copy(const StickerSheet &other); // Helper function
    private:
        Image base;
        struct Sticker* scene;
        unsigned num;
};

#endif