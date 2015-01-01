#include <gtest/gtest.h>
#include <QImage>
#include "../dungeonmap.h"

TEST(Minmalist_Tests, generatemapReturnsNonNullQImage)
{
	QImage img = generatemap(1,1);

	ASSERT_FALSE(img.isNull());
}
