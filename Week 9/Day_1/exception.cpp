        try{
            int result=Server::compute(A,B);
            cout<<result<<endl;
        }catch(const bad_alloc& e)
        {
            cout<<"Not enough memory"<<endl;
        }
        catch(const invalid_argument& e)
        {
            cout<<"Exception: "<<e.what()<<endl;
        }
        catch(const out_of_range& e){
            cout<<"Exception: "<<e.what()<<endl;
        }
        catch(const exception& e){
            cout<<e.what()<<endl;
        }
        catch(...)
        {
            cout<<"Other Exception"<<endl;
        }