        #include<iostream>
        #include"test.h"
        #include<string>
        #include<unordered_map>
        #include<vector>

        using namespace std; 

        unordered_map<int,Student> unmap_student; 
        unordered_map<int,Instructor>unmap_instructor;
        unordered_map<int, Course>unmap_course;
        unordered_map<int,int>assignmap;

        void Person::displayInfo(){
            cout<<"What is your name? "<<endl;
            cin>>name;

            cout<<"What is your ID? "<<endl;
            cin>>id;
        }

        void Student::addData(){
        

        cout<<"What is your name? "<<endl;
        cin>>name;

        cout<<"What is your id? "<<endl;
        cin>>id;

        cout<<"What is your grade? "<<endl;
        cin>>grade;

        cout<<"How many course do you wanna add? "<<endl;
        cin>>course_total;

        for(int i=0;i<course_total;i++){
        cout<<"What is your course?"<<endl;
        cin>>coursesEnrolled;

        Student student_object(name,id,grade,student_course,coursesEnrolled);
        student_details_vector.push_back(student_object);

        unmap_student[id]=Student(name);

        };
        

        };

    void Student::displayInfo(){
     for(auto c:student_details_vector){
            cout<<"Name:"<<c.name<<endl;
            cout<<"ID: "<<c.id<<endl;
            cout<<"Grade:"<< c.grade<<endl;
            cout<<"Course Enrolled: "<<c.coursesEnrolled<<endl;
            cout<<"______________________"<<endl;
            cout<<" "<<endl;
                      

    };
    

    };

    void Student::deleteStudent(){
        cout<<"What is your ID? "<<endl;
        cin>>id;
        int i=1;
        for (size_t i = 0; i < student_details_vector.size(); ++i) {
        if (student_details_vector[i].id == id) {
            student_details_vector.erase(student_details_vector.begin() + i);
            break;  
        };
    };



    };

    


    void Instructor::add_instructor_data(){
        cout<<"What is your name? "<<endl;
        cin>>name;

        cout<<"What is your ID? "<<endl;
        cin>>id;

        cout<<"What is your office hours? "<<endl;
        cin>>office_hours;

        cout<<"How any courses are you going to teach? "<<endl;
        cin>>total_course;
        
        for(int i=0;i<total_course;i++){
        cout<<"Which course you are going to teach? "<<endl;
        cin>>course_taught;

        Instructor Object1(name,id,office_hours,course_taught);
        vector_instructor.push_back(Object1);

         unmap_instructor[id]=Instructor(name);
        };

        };

        void Instructor::displayInfo(){
            for(auto C:vector_instructor){
                cout<<"Name: "<<C.name<<endl;
                cout<<"ID: "<<C.id<<endl;
                cout<<"Office Hours: "<<C.office_hours<<endl;
                cout<<"Course Taught: "<<C.course_taught<<endl;
                cout<<" "<<endl;
            
        
            }
    };

    void Instructor::deleteInfo(){
        cout<<"What is your ID? "<<endl;
        cin>>id;

        for(int i=0;i<vector_instructor.size();i++){
            if(vector_instructor[i].id==id){
                vector_instructor.erase(vector_instructor.begin()+i);
                break;
            };
        };
    };


        void Course::add_course(){
            
            cout<<"How many course do you wanna reister for? "<<endl;
            cin>>total_course;
            
            for(int i=0;i<total_course;i++){
            cout<<"What is your course code? "<<endl;
            cin>>course_code;

            cout<<"What is your course name? "<<endl;
            cin>>course_name;

            cout<<"What is instructor name? "<<endl;
            cin>>instructor_name;

            cout<<"What is your student ID? "<<endl;
            cin>>student_ID; 

            Course C(course_code,course_name,instructor_name,student_ID);
            course_vector.push_back(C);
            unmap_course[course_code]=Course(course_name);

            };

           


        };

    void Course::displayInfo(){
        for(auto print:course_vector){
            cout<<"Course Code: "<<print.course_code<<endl;
            cout<<"Coruse Name: "<<print.course_name<<endl;
            cout<<"Instructor Name: "<<print.instructor_name<<endl;
            cout<<"Student ID: "<<print.student_ID<<endl;
            cout<<" "<<endl;
            
        };
    };

    void Course::assign_instructor(){
        cout<<"What is your student ID? "<<endl;
        cin>>student_ID;

        cout<<"Which course you wanna register for ? "<<endl;
        cin>>course_code;

        cout<<"Which is yout teacher code? "<<endl;
        cin>>teacher_code;

        for(auto S: unmap_student){
            for(auto C:unmap_course){
                for(auto I:unmap_instructor){

              
                if(S.first==student_ID && C.first==course_code && I.first==teacher_code){
                    assignmap[student_ID]=(teacher_code);
                };
            };
            };
        };
    };

    void Course::assignCourseInfo(){
        for(auto B:assignmap){
            cout<<"Student ID: "<<B.first<<endl;
            cout<<"Teacher ID: "<<B.second<<endl;

        };
            };


    void Menu::menu(){
        int options; 
        string sub_options;

        while(options!=5){
            cout<<"1. Add Data"<<endl;
        cout<<"2. Deleting Data"<<endl;
        cout<<"3. Assinging Instructor"<<endl;
        cout<<"4. Viewing Info"<<endl;
        cout<<"5. Exit"<<endl;


    //sub-options
        cin>>options;
        cout<<"a. Student"<<endl;
            cout<<"b. Instructor"<<endl;
            cout<<"c. Course "<<endl;
        cin>>sub_options;

    //addition   
        if(options==1){
        

            if(sub_options=="a"){
                S.addData();
                
            }
            else if(sub_options=="b"){
                I.add_instructor_data();

            }

            else if(sub_options=="c"){
                C.add_course();

            }
                }

    //deletion
        else if(options==2){

            if(sub_options=="a"){
            S.deleteStudent();

            }
            else if(sub_options=="b"){
            I.deleteInfo();

            }

            else if(sub_options=="c"){
                //C.assign_instructor();
                C.displayInfo();

            }
        

        }
        
        else if(options==3){
        C.assign_instructor();
        C.assignCourseInfo();

        }

    //display


        else if (options==4){
            if(sub_options=="a"){
            S.displayInfo();

            }
            else if(sub_options=="b"){
            I.displayInfo();

            }

            else if(sub_options=="c"){
                C.displayInfo();

            }
        }


    //break
        else if (options==5){
        break;
        }





        }
        
    }
