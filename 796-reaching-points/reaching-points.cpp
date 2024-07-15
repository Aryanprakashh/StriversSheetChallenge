class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        while(tx>sx and ty>sy){
            if(tx>ty)
            tx%=ty;
            else ty%=tx;
        }

        if(tx==sx and ty>=sy){
            return (ty-sy)%tx==0;
        }
        else if(ty==sy and tx>=sx){
            return (tx-sx)%ty==0;
        }
        return false;
    }
};