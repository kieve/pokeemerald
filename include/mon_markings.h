#ifndef POKEEMERALD_MON_MARKINGS_H
#define POKEEMERALD_MON_MARKINGS_H

struct PokemonMarkMenu
{
    /*0x0000*/ u16 baseTileTag;
    /*0x0002*/ u16 basePaletteTag;
    /*0x0004*/ u8 markings; // bit flags
    /*0x0005*/ s8 cursorPos;
    /*0x0006*/ bool8 markingsArray[4];
    /*0x000A*/ u8 cursorBaseY;
    /*0x000B*/ bool8 spriteSheetLoadRequired;
    /*0x000C*/ struct Sprite *menuWindowSprites[2]; // upper and lower halves of menu window
    /*0x0014*/ struct Sprite *menuMarkingSprites[4];
    /*0x0024*/ struct Sprite *unkSprite;
    /*0x0028*/ struct Sprite *menuTextSprite;
    /*0x002C*/ const u8 *frameTiles;
    /*0x0030*/ const u16 *framePalette;
    /*0x0034*/ u8 menuWindowSpriteTiles[0x1000];
    /*0x1034*/ u8 filler1030[0x80];
    /*0x10B4*/ u8 tileLoadState;
}; // 10b8

struct Sprite *sub_811FF94(u16 tileTag, u16 paletteTag, const u16 *palette);

#endif //POKEEMERALD_MON_MARKINGS_H
