#include "Goal.h"
#include "PaperFlipbookComponent.h"

AGoal::AGoal()
{
	Flipbook = (UPaperFlipbookComponent*)CreateDefaultSubobject(new UPaperFlipbookComponent());

	Flipbook->Shape = 'G';
	Flipbook->RenderOrder = 6;
	Flipbook->Color = { 0, 255, 0, 0 };
	Flipbook->ColorKey = { 255, 255, 255, 255 };

	Flipbook->Filename = "goal.bmp";
	Flipbook->IsSprite = false;

	Flipbook->Load();
}

AGoal::AGoal(const FVector2D& InVector)
{
	Location = InVector;

	Flipbook = (UPaperFlipbookComponent*)CreateDefaultSubobject(new UPaperFlipbookComponent());

	Flipbook->Shape = 'G';
	Flipbook->RenderOrder = 6;
	Flipbook->Color = { 0, 255, 0, 0 };
	Flipbook->ColorKey = { 255, 255, 255, 255 };

	Flipbook->Filename = "goal.bmp";
	Flipbook->IsSprite = false;

	Flipbook->Load();
}

AGoal::~AGoal()
{
}