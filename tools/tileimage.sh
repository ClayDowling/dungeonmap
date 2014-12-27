#!/bin/bash

SOURCE=$1
DSTPATH=${SOURCE%/*}
SOURCEFILE=$(basename $SOURCE)
NAME=${SOURCEFILE%.*}

convert $SOURCE -crop 2x3@ +repage -adjoin "${DSTPATH}/rough-%d.png"

ROUGHTILES=$(ls ${DSTPATH}/rough-*.png)
for FILE in $ROUGHTILES
do
	BACK="${FILE#*-}"
	NUMBER=${BACK%%.*}

	convert $FILE -trim "${DSTPATH}/${NAME}-${NUMBER}.png"
	rm $FILE
done
