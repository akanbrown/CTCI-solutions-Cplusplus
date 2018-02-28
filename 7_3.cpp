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

