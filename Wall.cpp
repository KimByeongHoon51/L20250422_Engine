#include "Wall.h"
#include "PaperFlipbookComponent.h"


AWall::AWall()
{
	Flipbook = (UPaperFlipbookComponent*)CreateDefaultSubobject(new UPaperFlipbookComponent());

	Flipbook->Shape = '0';
	Flipbook->RenderOrder = 9;
	Flipbook->Color = { 255, 255, 255, 0 };
	Flipbook->ColorKey = { 255, 255, 255, 255 };

	Flipbook->Filename = "wall.bmp";
	Flipbook->IsSprite = false;

	Flipbook->Load();
}

AWall::AWall(const FVector2D& InVector)
{
	Location = InVector;

	Flipbook = (UPaperFlipbookComponent*)CreateDefaultSubobject(new UPaperFlipbookComponent());

	Flipbook->Shape = '0';
	Flipbook->RenderOrder = 9;
	Flipbook->Color = { 255, 255, 255, 0 };
	Flipbook->ColorKey = { 255, 255, 255, 255 };

	Flipbook->Filename = "wall.bmp";
	Flipbook->IsSprite = false;

	Flipbook->Load();
}

AWall::~AWall()
{
}