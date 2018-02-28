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

