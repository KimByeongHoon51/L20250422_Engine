#include "Monster.h"
#include "PaperFlipbookComponent.h"

AMonster::AMonster()
{

	Flipbook = (UPaperFlipbookComponent*)CreateDefaultSubobject(new UPaperFlipbookComponent());

	Flipbook->Shape = 'M';
	Flipbook->RenderOrder = 6;
	Flipbook->Color = { 255, 0, 0, 0 };
	Flipbook->ColorKey = { 255, 255, 255, 255 };

	Flipbook->Filename = "monster.bmp";
	Flipbook->IsSprite = false;

	Flipbook->Load();
}

AMonster::AMonster(const FVector2D& InVector)
{
	Location = InVector;

	Flipbook = (UPaperFlipbookComponent*)CreateDefaultSubobject(new UPaperFlipbookComponent());

	Flipbook->Shape = 'M';
	Flipbook->RenderOrder = 6;
	Flipbook->Color = { 255, 0, 0, 0 };
	Flipbook->ColorKey = { 255, 255, 255, 255 };

	Flipbook->Filename = "monster.bmp";
	Flipbook->IsSprite = false;

	Flipbook->Load();
}

AMonster::~AMonster()
{
}