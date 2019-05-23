#ifndef VALIDATEPIECEMOVE_H
#define VALIDATEPIECEMOVE_H

#include "chesspiece.h"
#include "pch.h"

class ValidatePieceMove
{
public:
    static bool verifyPawn(ChessPiece *pawn, QGraphicsItem* collider);

    static bool verifyRook(ChessPiece *rook, QList<QGraphicsItem*> colliders);
    static bool verifyBishop(ChessPiece *bishop, QList<QGraphicsItem*> colliders);
    static bool verifyKnight(ChessPiece *knight, QList<QGraphicsItem*> colliders);
    static bool verifyKing(ChessPiece *king, QList<QGraphicsItem*> colliders);
    static bool verifyQueen(ChessPiece *queen, QList<QGraphicsItem*> colliders);
};

#endif // VALIDATEPIECEMOVE_H
