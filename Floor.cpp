#include "Floor.h"
#include "PaperFlipbookComponent.h"

AFloor::AFloor()
{
	Flipbook = (UPaperFlipbookComponent*)CreateDefaultSubobject(new UPaperFlipbookComponent());

	Flipbook->Shape = ' ';
	Flipbook->RenderOrder = 10;
	Flipbook->Color = { 255, 255, 255, 0 };
	Flipbook->ColorKey = { 255, 255, 255, 255 };

	Flipbook->Filename = "floor.bmp";
	Flipbook->IsSprite = false;

	Flipbook->Load();
}

AFloor::AFloor(const FVector2D& InVector)
{
	Location = InVector;

	Flipbook = (UPaperFlipbookComponent*)CreateDefaultSubobject(new UPaperFlipbookComponent());

	Flipbook->Shape = ' ';
	Flipbook->RenderOrder = 10;
	Flipbook->Color = { 255, 255, 255, 0 };
	Flipbook->ColorKey = { 255, 255, 255, 255 };

	Flipbook->Filename = "floor.bmp";
	Flipbook->IsSprite = false;

	Flipbook->Load();
}

AFloor::~AFloor()
{
}