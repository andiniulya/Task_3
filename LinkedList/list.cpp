void deleteFirst (list &l, address p)
{
    if(next(first(l))==nil)
    {
        first(l)=nil;
    }
    else
    {
        p=first(l);
        first(l)=next(p);
        next(p)=nil;
    }
};
void deleteLast (list &l, address p)
{
    address q;
    while (next(p)!=nil)
    {
        q=p;
        p=next(p);
    }
    next(q)=nil;
    dealokasi(p);
};

void deleteafter(address q, address *p)
{
  next(q)=next(*p);
  next(*p)=NULL;
  dealokasi(*p);
};
