// Copyright 2019 Tefel. All Rights Reserved

#include "SLoadingScreen.h"
#include "Widgets/Images/SThrobber.h"
#include "VoxelGameInstance.h"

#define LOCTEXT_NAMESPACE "SLoadingScreen"
 
void SLoadingScreen::Construct(const FArguments& InArgs)
{
	FString ImagePath = TEXT("Content/pictures/Grass.png");
	FName BrushName = FName(*ImagePath);

	ChildSlot
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.VAlign(VAlign_Bottom)
			.HAlign(HAlign_Center)
			[
				SNew(SThrobber)
			]
			+ SVerticalBox::Slot()
			.Padding(0,40)
			.VAlign(VAlign_Bottom)
			.HAlign(HAlign_Center)
			[
				SNew(STextBlock)
				.Text(NSLOCTEXT("MoviePlayerTestLoadingScreen", "LoadingComplete", "Generating world"))
			]
		];
}
 
#undef LOCTEXT_NAMESPACE