b[101][101];xg,yg;r(x,y,c){if(c!=b[x][y])return 0;if(x==xg&&y==yg)return 1;b[x][y]=0;return r(x+1,y,c)||r(x,y+1,c)||r(x-1,y,c)||r(x,y-1,c)?1:0;}main(xs,ys,n,c,d,x,y){for(;scanf("%d%d",&x,&y),x;puts(b[xs][ys]&&b[xg][yg]&&b[xs][ys]==b[xg][yg]&&r(xs,ys,b[xs][ys])?"OK":"NG"))for(scanf("%d%d%d%d%d",&xs,&ys,&xg,&yg,&n);n;n--)if(scanf("%d%d%d%d",&c,&d,&x,&y),d)b[x][y]=b[x+1][y]=b[x][y+1]=b[x+1][y+1]=b[x][y+2]=b[x+1][y+2]=b[x][y+3]=b[x+1][y+3]=c;else b[x][y]=b[x+1][y]=b[x+2][y]=b[x+3][y]=b[x][y+1]=b[x+1][y+1]=b[x+2][y+1]=b[x+3][y+1]=c;exit(0);}