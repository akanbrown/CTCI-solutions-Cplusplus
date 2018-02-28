/**
Design a musical juke box using object oriented principles.
**/

private: System::Void listBox1_SelectedIndexChanged(
         System::Object^  sender, System::EventArgs^  e)
{

    label8->Text="";
    label1->Text="Jokefile= "+fileList[listBox1->SelectedIndex] ;
    ProcessFile( fileList[listBox1->SelectedIndex] );
    jokeFileCount=listBox1->SelectedIndex;
    listBox2->SetSelected(0,true);
    updateInfoDisplay();
    this->Text ="Joke Jukebox by TopCoder  [" + 
                   fileList[listBox1->SelectedIndex]+"]";
}

void Form1::GenerateRandomFiles()
{
    Random^ random = gcnew Random( Environment::TickCount );

    for (int j=0;j<FileCount;j++)
    {
        iFileList[j] =random->Next() % (FileCount) ;
        for(int k=0;k<j;k++)
            if (iFileList[j]==iFileList[k]) j--;
    }
}

private: System::Void listBox2_SelectedIndexChanged_1(
         System::Object^  sender, System::EventArgs^  e)
{
    label8->Text=JokeList[listBox2->SelectedIndex];
    jokeLineCount=listBox2->SelectedIndex;
    updateInfoDisplay();
}

void Form1::displayRandomJokeLines()
{
    String^ sDebug;

    if (RanDom==1)
    {
        jokeLineCount=(int)iJokeList[doneLines];
        listBox2->SetSelected(jokeLineCount,true);
        label8->Text=JokeList[jokeLineCount];
        label10->Text="Unread Lines "+(LineCount-doneLines) +"  ";
        label11->Text="Unread Files "+(FileCount-doneFiles);

        doneLines++;
        if (doneLines>=LineCount)
        {
            doneLines=0;
            updateInfoDisplay();
            jokeFileCount=(int)iFileList[doneFiles];
            ProcessFile( fileList[jokeFileCount] );
            listBox1->SetSelected(jokeFileCount,true);
            label1->Text="Jokefile= "+fileList[jokeFileCount] ;
            listBox2->SetSelected(0,true);
            label11->Text="Unread Files "+(FileCount-doneFiles);

            GenerateRandomLines();

            doneFiles++;
            if (doneFiles>=FileCount)
            {
                initRandomMode();
            }
        }
    }
}

