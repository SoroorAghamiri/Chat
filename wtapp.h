#ifndef WTAPP_H
#define WTAPP_H
#include <Wt/WApplication>
#include <Wt/WBreak>
#include <Wt/WText>
#include <Wt/WLabel>
#include <Wt/WLineEdit>
#include <Wt/WContainerWidget>
#include <Wt/WPushButton>
#include <Wt/WHBoxLayout>
#include <Wt/WMessageBox>
#include <Wt/WBootstrapTheme>
using namespace Wt;

class WtApp : public WApplication
{
public:

       WtApp(const WEnvironment & env);

protected:
private:

        WText *greeting_;
        WLineEdit *nameEdit1;
        WLineEdit *nameEdit2;
        void slt_btn_clicked();

};


#endif // WTAPP_H
